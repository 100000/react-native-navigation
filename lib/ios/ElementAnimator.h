#import <Foundation/Foundation.h>
#import "ElementTransitionOptions.h"
#import "BaseAnimator.h"

@interface ElementAnimator : BaseAnimator

- (instancetype)initWithTransitionOptions:(ElementTransitionOptions *)transitionOptions view:(UIView *)view fromVC:(UIViewController *)fromVC toVC:(UIViewController *)toVC;

- (void)createAnimations;

- (void)prepareAnimations;

@end
