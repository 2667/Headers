//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTMotionViewDelegate-Protocol.h"

@class NSDate, NSDictionary, NSString, TTAdCanvasTracker, TTMotionView;

@interface TTRNPanoramaView : SSThemedView <TTMotionViewDelegate>
{
    _Bool _enable;
    _Bool _hasTrack;
    NSDictionary *_source;
    NSDictionary *_extra;
    TTMotionView *_motionView;
    NSDate *_lastTimeActive;
    TTAdCanvasTracker *_tracker;
}

@property(retain, nonatomic) TTAdCanvasTracker *tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) NSDate *lastTimeActive; // @synthesize lastTimeActive=_lastTimeActive;
@property(nonatomic) _Bool hasTrack; // @synthesize hasTrack=_hasTrack;
@property(retain, nonatomic) TTMotionView *motionView; // @synthesize motionView=_motionView;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) NSDictionary *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)motionViewScrollViewDidScrollToOffset:(struct CGPoint)arg1;
- (void)sendInteractTracker;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

