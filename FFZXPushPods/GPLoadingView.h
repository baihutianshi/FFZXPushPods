//
//  GPLoadingView.h
//  GPLoadingView
//

#import <UIKit/UIKit.h>

@interface GPLoadingView : UIControl

@property (nonatomic, readonly) BOOL isAnimating;

- (id)initWithFrame:(CGRect)frame;
- (id)initWithSubFrame:(CGRect)frame;

- (void)startAnimation;
- (void)stopAnimation;
@end
