/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIActivityFunctionImageView, UILabel;

@interface _UIActivityGroupActivityCell : UICollectionViewCell  {
    _UIActivityFunctionImageView *_activityImageView;
    UILabel *_activityLabel;
}

@property(retain) _UIActivityFunctionImageView * activityImageView;
@property(retain) UILabel * activityLabel;

+ (id)_initializeSafeCategoryFromValidationManager;
+ (void)_initializeSafeCategory;

- (void)dealloc;
- (id)activityLabel;
- (void)setActivity:(id)arg1 withCustomTitle:(id)arg2;
- (id)activityImageView;
- (void)reloadImage:(id)arg1;
- (void)setActivityLabel:(id)arg1;
- (void)setActivityImageView:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end