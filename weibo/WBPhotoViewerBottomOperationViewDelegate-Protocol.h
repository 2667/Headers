//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBPhotoViewerBottomOperationView;

@protocol WBPhotoViewerBottomOperationViewDelegate <NSObject>
- (_Bool)bottomOperationViewShouldShowRecommendTipView;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapExpend:(_Bool)arg2;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapMore:(id)arg2;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapFuncJump:(id)arg2;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapProductContent:(id)arg2;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapWeiboContent:(id)arg2;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapCommentLike:(id)arg2;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapCommentRetweet:(id)arg2;
- (void)bottomOperationView:(WBPhotoViewerBottomOperationView *)arg1 didTapCommentList:(id)arg2;
@end

