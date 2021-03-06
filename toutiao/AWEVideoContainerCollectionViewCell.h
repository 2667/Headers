//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEVideoPlayViewDelegate-Protocol.h"

@class AWEVideoPlayView, NSDictionary, NSString, TTShortVideoModel, UIViewController;
@protocol TSVControlOverlayViewController;

@interface AWEVideoContainerCollectionViewCell : UICollectionViewCell <AWEVideoPlayViewDelegate>
{
    _Bool _usingFirstFrameCover;
    AWEVideoPlayView *_videoPlayView;
    TTShortVideoModel *_videoDetail;
    double _spacingMargin;
    UIViewController<TSVControlOverlayViewController> *_overlayViewController;
    NSDictionary *_commonTrackingParameter;
    double _totalPlayTime;
    CDUnknownBlockType _videoDidStartPlay;
    CDUnknownBlockType _videoDidPlayOneLoop;
}

@property(nonatomic) _Bool usingFirstFrameCover; // @synthesize usingFirstFrameCover=_usingFirstFrameCover;
@property(copy, nonatomic) CDUnknownBlockType videoDidPlayOneLoop; // @synthesize videoDidPlayOneLoop=_videoDidPlayOneLoop;
@property(copy, nonatomic) CDUnknownBlockType videoDidStartPlay; // @synthesize videoDidStartPlay=_videoDidStartPlay;
@property(nonatomic) double totalPlayTime; // @synthesize totalPlayTime=_totalPlayTime;
@property(copy, nonatomic) NSDictionary *commonTrackingParameter; // @synthesize commonTrackingParameter=_commonTrackingParameter;
@property(retain, nonatomic) UIViewController<TSVControlOverlayViewController> *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(nonatomic) double spacingMargin; // @synthesize spacingMargin=_spacingMargin;
@property(retain, nonatomic) TTShortVideoModel *videoDetail; // @synthesize videoDetail=_videoDetail;
@property(retain, nonatomic) AWEVideoPlayView *videoPlayView; // @synthesize videoPlayView=_videoPlayView;
- (void).cxx_destruct;
- (void)cellWillDisplay;
- (void)updateWithModel:(id)arg1 usingFirstFrameCover:(_Bool)arg2;
- (void)prepareForReuse;
- (void)playView:(id)arg1 didPlayNextLoopWithModel:(id)arg2;
- (void)playView:(id)arg1 didStopPlayWithModel:(id)arg2 duration:(double)arg3;
- (void)playView:(id)arg1 didStartPlayWithModel:(id)arg2;
- (void)layoutSubviews;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 scale:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

