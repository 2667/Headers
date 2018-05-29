//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContentImageView.h"

#import "WBVideoPlayerSourceView-Protocol.h"

@class NSDictionary, NSString, UIButton, UIImageView, UILabel, WBPageAlbumItemCard, WBRoundedImageView, WBStatus, WBTimelinePageInfo;
@protocol AlbumItemDelegate, WBMediaPlaybackItem;

@interface WBPageCardAlbumItemView : WBContentImageView <WBVideoPlayerSourceView>
{
    int _mediaType;
    WBRoundedImageView *_layerText;
    WBRoundedImageView *_bottomShadowView;
    WBPageAlbumItemCard *_item;
    UIImageView *_paidIconView;
    UILabel *_videoDurationLabel;
    UIButton *_shadowPhotoView;
    id <AlbumItemDelegate> _delegate;
}

@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) __weak id <AlbumItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *shadowPhotoView; // @synthesize shadowPhotoView=_shadowPhotoView;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) UIImageView *paidIconView; // @synthesize paidIconView=_paidIconView;
@property(retain, nonatomic) WBPageAlbumItemCard *item; // @synthesize item=_item;
@property(retain, nonatomic) WBRoundedImageView *bottomShadowView; // @synthesize bottomShadowView=_bottomShadowView;
@property(retain, nonatomic) WBRoundedImageView *layerText; // @synthesize layerText=_layerText;
- (void).cxx_destruct;
- (id)accessibilityIdentifier;
@property(readonly, nonatomic) WBStatus *mediaPlaybackStatus;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
@property(readonly, nonatomic) WBTimelinePageInfo *mediaPlaybackAnalysisPageInfo;
- (id)mediaPlaybackPlaceholderImageURL;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;
- (id)formatTimeString:(double)arg1;
- (id)flagImageNameForItem:(id)arg1;
- (void)photoViewPressed;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool videoPlayer_gifVideo;
@property(readonly, nonatomic) _Bool videoPlayer_shouldEnterFullScreen;
@property(readonly, nonatomic) _Bool videoPlayer_videoTimelineDisabled;

@end

