/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAvalancheReviewCollectionViewLayout : PUHorizontalCollectionViewLayout {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _sharingBadgeOffset;
    NSIndexPath *_zoomingCellIndexPath;
}

@property (nonatomic) <PUAvalancheReviewCollectionViewLayoutDelegate> *delegate;
@property (nonatomic) struct UIOffset { float x1; float x2; } sharingBadgeOffset;
@property (nonatomic, retain) NSIndexPath *zoomingCellIndexPath;

- (void).cxx_destruct;
- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_floatingSelectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visibleItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atIndexPath:(id)arg3;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)setSharingBadgeOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setZoomingCellIndexPath:(id)arg1;
- (struct UIOffset { float x1; float x2; })sharingBadgeOffset;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)zoomingCellIndexPath;

@end