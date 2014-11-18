#import "VENTouchLockPasscodeViewController.h"

typedef void (^PasscodeSetBlock)(BOOL success);

@interface VENTouchLockCreatePasscodeViewController : VENTouchLockPasscodeViewController
- (id)initWithPasscodeSetBlock:(PasscodeSetBlock)passcodeSetBlock;
@end
