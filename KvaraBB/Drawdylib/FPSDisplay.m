
#import "FPSDisplay.h"
#import "HeeeNoScreenShotView.h"

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
@interface FPSDisplay ()

@property (strong, nonatomic) UILabel *displayLabel;
@property (strong, nonatomic) CADisplayLink *link;
@property (assign, nonatomic) NSInteger count;
@property (assign, nonatomic) NSTimeInterval lastTime;
@property (strong, nonatomic) UIFont *font;
@property (strong, nonatomic) UIFont *subFont;
@end
@implementation FPSDisplay
static FPSDisplay *extraInfo;
+ (instancetype)shareFPSDisplay {
    static FPSDisplay *shareDisplay;
    static dispatch_once_t onceToken;
    
    dispatch_once(&onceToken, ^{
        shareDisplay = [[FPSDisplay alloc] init];
    });
    
    return shareDisplay;
}




+ (void)load
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5* NSEC_PER_SEC)), dispatch_get_main_queue(), ^{

        [FPSDisplay shareFPSDisplay];//FPS



        });}
- (instancetype)init {
    self = [super init];
    if (self) {
        [self initDisplayLabel];
    }
    return self;
}
- (void)initDisplayLabel {
    CGRect frame = CGRectMake(0, 0,300,33);//540 70
    
    self.displayLabel = [[UILabel alloc] initWithFrame: frame];
    self.displayLabel.layer.cornerRadius = 5;
    self.displayLabel.clipsToBounds = YES;
    self.displayLabel.textAlignment = NSTextAlignmentCenter;
    self.displayLabel.userInteractionEnabled = NO;
   

    _font = [UIFont fontWithName:@"Menlo" size:60];//14
    if (_font) {
        _subFont = [UIFont fontWithName:@"Menlo" size:10];//4
    } else {
        _font = [UIFont fontWithName:@"Courier" size:30];//14
        _subFont = [UIFont fontWithName:@"Courier" size:10];//4
    }

    [self initCADisplayLink];
   
    [[[[UIApplication sharedApplication]windows]firstObject]addSubview:self.displayLabel];
}

- (void)initCADisplayLink {
    self.link = [CADisplayLink displayLinkWithTarget:self selector:@selector(tick:)];
    [self.link addToRunLoop:[NSRunLoop mainRunLoop] forMode:NSRunLoopCommonModes];
}
- (void)tick:(CADisplayLink *)link
{
    if(self.lastTime == 0){
        self.lastTime = link.timestamp;
        return;
    }
    self.count += 1;
    NSTimeInterval delta = link.timestamp - _lastTime;
    if(delta >= 1.f){
        self.lastTime = link.timestamp;
        float fps = self.count / delta;
        self.count = 0;
        [self updateDisplayLabelText: fps];
    }
}

- (void)updateDisplayLabelText: (float) fps
{
    NSMutableString *mustr = [[NSMutableString alloc] init];
    [mustr appendFormat:@"%@",self.getSystemDate];
    self.displayLabel.font = [UIFont systemFontOfSize:12];
    
    if ((int)fps>90) {
        self.displayLabel.textColor = [UIColor colorWithRed:0 green:2 blue:2 alpha:2];
        self.displayLabel.text = [NSString stringWithFormat:@"FPS: %d Vary Good",(int)round(fps),mustr];//fps
    }
    if ((int)fps>60) {
        self.displayLabel.textColor = [UIColor colorWithRed:0 green:2 blue:2 alpha:2];
        self.displayLabel.text = [NSString stringWithFormat:@"FPS: %d Vary Good",(int)round(fps),mustr];//fps
    }
    if ((int)fps>50) {
        self.displayLabel.textColor = [UIColor colorWithRed:0 green:2 blue:2 alpha:2];
        self.displayLabel.text = [NSString stringWithFormat:@"FPS: %d Vary Good",(int)round(fps),mustr];//fps
    }
    if ((int)fps<40) {
        self.displayLabel.textColor = [UIColor colorWithRed:2 green:0 blue:2 alpha:2];
        self.displayLabel.text = [NSString stringWithFormat:@"FPS: %d Good",(int)round(fps),mustr];//fps
               }
    if ((int)fps<30) {
        self.displayLabel.textColor = [UIColor colorWithRed:2 green:2 blue:0 alpha:2];
        self.displayLabel.text = [NSString stringWithFormat:@"FPS: %d Bad ",(int)round(fps),mustr];//fps
               }
    if ((int)fps<10) {
        self.displayLabel.textColor = [UIColor colorWithRed:3 green:0 blue:0 alpha:3];
        self.displayLabel.text = [NSString stringWithFormat:@"FPS: %d Vary Bad ",(int)round(fps),mustr];//fps
               }
    [[[[UIApplication sharedApplication] windows]lastObject] addSubview:self.displayLabel];
      HeeeNoScreenShotView *noScreenShotView = [[HeeeNoScreenShotView alloc] initWithFrame:CGRectMake(0,0,0,0)];
       [noScreenShotView setUserInteractionEnabled:NO];
     [noScreenShotView addSubview:self.displayLabel];
     [[[[UIApplication sharedApplication] windows]lastObject] addSubview:noScreenShotView];

    
}

- (NSString *)getSystemDate
{
    NSDate *currentDate = [NSDate date];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"HH:mm:ss"];
    return [dateFormatter stringFromDate:currentDate];
}

@end

