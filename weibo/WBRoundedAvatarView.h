//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "WBSkinning-Protocol.h"

@class NSString, UIColor, UIImage, UIImageView, WBContentImageView, WBStoryRingView;

@interface WBRoundedAvatarView : UIControl <WBSkinning>
{
    WBContentImageView *avatarImageView;
    UIImageView *flagImageView;
    WBContentImageView *pendantImageView;
    unsigned long long verifiedType;
    double _avatarMeasure;
    double _pendantWidth;
    double _pendantHeight;
    double _pendantHeightOffset;
    double _flagMeasure;
    double _totalMeasure;
    double _cornerRadius;
    _Bool _hidesFlagView;
    _Bool _ignoreImageMask;
    _Bool _enableStoryState;
    _Bool _useUIImageView;
    _Bool _showsBorderCornerRadius;
    UIImage *avatarImage;
    NSString *_pendantImageViewUrl;
    WBStoryRingView *_storyRingView;
    long long _verifiedTypeExt;
    long long _storyState;
    long long _drawingPolicy;
    double _borderWidth;
    UIColor *_borderColor;
}

+ (void)initialize;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool showsBorderCornerRadius; // @synthesize showsBorderCornerRadius=_showsBorderCornerRadius;
@property(nonatomic) _Bool useUIImageView; // @synthesize useUIImageView=_useUIImageView;
@property(nonatomic) long long drawingPolicy; // @synthesize drawingPolicy=_drawingPolicy;
@property(nonatomic) long long storyState; // @synthesize storyState=_storyState;
@property(nonatomic) _Bool enableStoryState; // @synthesize enableStoryState=_enableStoryState;
@property(nonatomic) long long verifiedTypeExt; // @synthesize verifiedTypeExt=_verifiedTypeExt;
@property(retain, nonatomic) WBStoryRingView *storyRingView; // @synthesize storyRingView=_storyRingView;
@property(retain, nonatomic) WBContentImageView *pendantImageView; // @synthesize pendantImageView;
@property(retain, nonatomic) UIImageView *flagImageView; // @synthesize flagImageView;
@property(copy, nonatomic) NSString *pendantImageViewUrl; // @synthesize pendantImageViewUrl=_pendantImageViewUrl;
@property(nonatomic) _Bool ignoreImageMask; // @synthesize ignoreImageMask=_ignoreImageMask;
@property(nonatomic) _Bool hidesFlagView; // @synthesize hidesFlagView=_hidesFlagView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double totalMeasure; // @synthesize totalMeasure=_totalMeasure;
@property(nonatomic) double flagMeasure; // @synthesize flagMeasure=_flagMeasure;
@property(nonatomic) double pendantHeightOffset; // @synthesize pendantHeightOffset=_pendantHeightOffset;
@property(nonatomic) double pendantHeight; // @synthesize pendantHeight=_pendantHeight;
@property(nonatomic) double pendantWidth; // @synthesize pendantWidth=_pendantWidth;
@property(nonatomic) double avatarMeasure; // @synthesize avatarMeasure=_avatarMeasure;
@property(retain, nonatomic) WBContentImageView *avatarImageView; // @synthesize avatarImageView;
@property(nonatomic) unsigned long long verifiedType; // @synthesize verifiedType;
- (void).cxx_destruct;
- (id)readDownSpec;
- (id)partlyDownSpec;
- (id)unreadSpec;
- (id)currentSpec;
- (_Bool)shouldShowStoryRingView;
- (void)updateStoryRingView;
- (id)wbt_viewForAnimation;
- (void)markAsLoaded;
- (void)setHighlighted:(_Bool)arg1;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (void)reloadUIElements;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage;
- (id)image;
- (void)dealloc;
- (id)init;
- (id)initWithOrigin:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithOrigin:(struct CGPoint)arg1 configMeasuresBlock:(CDUnknownBlockType)arg2;
- (struct CGPath *)cachedRoundPath;
- (struct CGPath *)newRoundPath;
- (void)configMeasures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

