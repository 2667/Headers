//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTVPlayerTipFinished-Protocol.h"

@class NSString, SSThemedLabel, TTImageView, TTVPlayerStateStore;

@interface TTVPlayerTipAdFinished : UIView <TTVPlayerTipFinished>
{
    _Bool _isFullScreen;
    id _data;
    CDUnknownBlockType _finishAction;
    TTVPlayerStateStore *_playerStateStore;
    UIView *_backView;
    TTImageView *_logoImageView;
    SSThemedLabel *_titleLabel;
}

@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) TTVPlayerStateStore *playerStateStore; // @synthesize playerStateStore=_playerStateStore;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)placeholderViewWithTitle:(id)arg1;
- (id)onGetActionBtn;
- (void)onLogoImageViewTapped;
- (void)layoutSubviews;
- (void)actionChangeCallbackWithAction:(id)arg1 state:(id)arg2;
- (void)ttv_kvo;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

