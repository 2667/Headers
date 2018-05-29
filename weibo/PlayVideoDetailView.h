//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "WBVideoPlayerSourceView-Protocol.h"

@class DSFeed, HeadlineVideoItem, NSDictionary, NSString;
@protocol WBMediaPlaybackItem;

@interface PlayVideoDetailView : UIImageView <WBVideoPlayerSourceView>
{
    HeadlineVideoItem *_videoItem;
    DSFeed *_feed;
}

@property(retain, nonatomic) DSFeed *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) HeadlineVideoItem *videoItem; // @synthesize videoItem=_videoItem;
- (void).cxx_destruct;
- (id)mediaPlaybackPlaceholderImageURL;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;
- (id)mediaAutoPlayDataModel;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;
- (id)mediaAutoPlaySourceViews;
- (id)mediaPlaybackStatus;
- (id)videoData;
- (void)configViewData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool videoPlayer_gifVideo;
@property(readonly, nonatomic) _Bool videoPlayer_shouldEnterFullScreen;
@property(readonly, nonatomic) _Bool videoPlayer_videoTimelineDisabled;

@end

