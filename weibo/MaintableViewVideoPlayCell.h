//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MainTableViewBaseCell.h"

#import "WBMediaAutoPlaySourceViewProvider-Protocol.h"

@class NSArray, NSString, PlayVideoDetailView, UIButton, UIImageView, UILabel;
@protocol WBMediaAutoPlayProviderDataModel;

@interface MaintableViewVideoPlayCell : MainTableViewBaseCell <WBMediaAutoPlaySourceViewProvider>
{
    PlayVideoDetailView *_bigImageView;
    UIButton *_playBtn;
    UILabel *_videoTimeLabel;
    UIImageView *_timeBgView;
}

@property(retain, nonatomic) UIImageView *timeBgView; // @synthesize timeBgView=_timeBgView;
@property(retain, nonatomic) UILabel *videoTimeLabel; // @synthesize videoTimeLabel=_videoTimeLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) PlayVideoDetailView *bigImageView; // @synthesize bigImageView=_bigImageView;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WBMediaAutoPlayProviderDataModel> mediaAutoPlayDataModel;
@property(readonly, nonatomic) NSArray *mediaAutoPlaySourceViews;
- (void)playButtonClick;
- (id)convertTime:(double)arg1;
- (id)videoData;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)fitPublicBar:(double)arg1;
- (void)fitLargePicture:(double)arg1;
- (void)relayoutTimeLabel;
- (void)relayoutSubViews;
- (void)setItemData:(id)arg1 panTip:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

