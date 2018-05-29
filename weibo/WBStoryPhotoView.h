//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBStoryMediaPlayerViewType-Protocol.h"
#import "WBStoryProgressImageViewDelegate-Protocol.h"

@class NSString, NSTimer, WBStoryItemSegment, WBStoryProgressImageView;
@protocol WBStoryMediaPlayerViewDelegate;

@interface WBStoryPhotoView : UIView <WBStoryProgressImageViewDelegate, WBStoryMediaPlayerViewType>
{
    double _playedTime;
    struct {
        unsigned int imageLoaded:1;
        unsigned int playing:1;
        unsigned int playStarted:1;
        unsigned int firstFrameRendered:1;
    } _flags;
    id <WBStoryMediaPlayerViewDelegate> _delegate;
    WBStoryItemSegment *_segment;
    WBStoryProgressImageView *_imageView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WBStoryProgressImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
@property(nonatomic) __weak id <WBStoryMediaPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)coverImage;
- (void)progressImageViewStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)configureWithItem:(id)arg1 delegate:(id)arg2;
- (id)item;
- (struct CGSize)mediaSize;
- (double)mediaDuration;
- (double)mediaCurrentTime;
- (void)seekToBeginning;
- (void)notifiFirstFrameRendered;
- (void)notifiPlayCompleteIfNeed;
- (void)stop;
- (void)pause;
- (void)_play;
- (void)play;
- (void)prepareForReuse;
- (void)timerTrigger:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

