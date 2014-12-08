#import "VENTouchLockPasscodeViewController.h"

@interface VENTouchLockEnterPasscodeViewController : VENTouchLockPasscodeViewController

/**
 Resets the number of passcode attempts recorded to 0
 */
+ (void)resetPasscodeAttemptHistory;
@property (assign, nonatomic) BOOL showCancelButton;
@end