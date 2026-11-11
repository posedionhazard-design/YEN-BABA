

#import <UIKit/UIKit.h>
#import "Drawst.h"

@class JFPlayer, JFProps, JFPlayerPool, JFPropsPool;

@interface IFuckYou : NSObject

@property (nonatomic, assign) bool isFire;



Box3D GetBox3D(Vector3 origin, Vector3 extends);

@property (nonatomic, strong) JFPlayer *localPlayer;
@property (nonatomic, strong) NSMutableArray *playerList;
@property (nonatomic, strong) NSMutableArray *propsList;
@property (nonatomic, assign) kaddr isGun;
@property (nonatomic, assign) kaddr lockActor;

@property (nonatomic, strong) JFPlayerPool *playerPool;
@property (nonatomic, strong) JFPropsPool *propsPool;

@property (nonatomic, strong) JFOverlayView *overlayView;
@property (nonatomic, strong) JFFloatingMenuView *floatingMenuView;

@property (nonatomic) Vector3 yupanpos;
@property (nonatomic) Vector3 worldPos;
+ (IFuckYou *)getInstance;


- (void)entry;
//QQ654153159
- (void)cancelTimer;
+ (void)Lifand:(bool)Swspd;
@end
