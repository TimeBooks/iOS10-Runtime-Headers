/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIControlCenterButtonDelegate>, UIImage;

@interface SBUIControlCenterButton : SBFButton <SBUIControlCenterControl> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _bgCapInsets;
    bool_inverted;
    bool_isCircleButton;
    <SBUIControlCenterButtonDelegate> *_delegate;
    UIImage *_normalBGImage;
    UIImage *_selectedBGImage;
    UIImage *_sourceGlyphImage;
    UIImage *_normalGlyphImage;
    UIImage *_sourceSelectedGlyphImage;
    UIImage *_selectedGlyphImage;
    double _naturalHeight;
}

@property <SBUIControlCenterButtonDelegate> * delegate;
@property(getter=isInverted) bool inverted;
@property bool isCircleButton;
@property(retain) UIImage * normalBGImage;
@property(retain) UIImage * selectedBGImage;
@property(retain) UIImage * sourceGlyphImage;
@property(retain) UIImage * normalGlyphImage;
@property(retain) UIImage * sourceSelectedGlyphImage;
@property(retain) UIImage * selectedGlyphImage;
@property double naturalHeight;

+ (id)roundRectButton;
+ (id)circularButton;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })visibleContentInsets;
+ (id)_roundRectBackgroundImageForState:(long long)arg1;
+ (id)_buttonWithBGImage:(id)arg1 selectedBGImage:(id)arg2 glyphImage:(id)arg3 naturalHeight:(double)arg4;
+ (id)_circleBackgroundImageForState:(long long)arg1 inverted:(bool)arg2;
+ (id)roundRectButtonWithGlyphImage:(id)arg1;
+ (id)circularButtonWithGlyphImage:(id)arg1;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
+ (void)initialize;

- (struct CGSize { double x1; double x2; })visibleContentSize;
- (void)_rebuildGlyphImages;
- (bool)isCircleButton;
- (void)_rebuildBackgroundImages;
- (void)setNaturalHeight:(double)arg1;
- (void)_rebuildSelectedGlyph;
- (void)_rebuildNormalGlyph;
- (id)sourceSelectedGlyphImage;
- (id)sourceGlyphImage;
- (id)selectedGlyphImage;
- (id)normalGlyphImage;
- (id)selectedBGImage;
- (id)normalBGImage;
- (void)setSourceSelectedGlyphImage:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;
- (void)setNormalGlyphImage:(id)arg1;
- (void)setSourceGlyphImage:(id)arg1;
- (void)setSelectedBGImage:(id)arg1;
- (void)setNormalBGImage:(id)arg1;
- (void)_pressAction;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)_setBackgroundImage:(id)arg1 selectedBackgroundImage:(id)arg2 naturalHeight:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundImage:(id)arg2 selectedBackgroundImage:(id)arg3 glyphImage:(id)arg4 naturalHeight:(double)arg5;
- (void)setIsCircleButton:(bool)arg1;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (long long)_currentState;
- (void)_updateForStateChange;
- (void)setEnabled:(bool)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)naturalHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setInverted:(bool)arg1;
- (bool)isInverted;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end