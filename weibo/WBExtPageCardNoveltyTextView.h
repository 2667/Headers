//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBCommonButtonViewDelegate-Protocol.h"

@class NSString, UIControl, UIImageView, UILabel, WBCommonButtonView, WBContactAvatarView, WBTimelineAttributedTextView;

@interface WBExtPageCardNoveltyTextView : WBPageCardViewBase <WBCommonButtonViewDelegate>
{
    WBContactAvatarView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_extLabel;
    UIImageView *_maskBgView;
    WBTimelineAttributedTextView *_contentTextView;
    UILabel *_screenNameLabel;
    UIControl *_screenNameOverlay;
    WBCommonButtonView *_commonButton;
}

+ (double)getSpaceLabelHeight:(id)arg1 withFont:(id)arg2 withWidth:(double)arg3;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1;
+ (void)load;
@property(retain, nonatomic) WBCommonButtonView *commonButton; // @synthesize commonButton=_commonButton;
@property(retain, nonatomic) UIControl *screenNameOverlay; // @synthesize screenNameOverlay=_screenNameOverlay;
@property(retain, nonatomic) UILabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBTimelineAttributedTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIImageView *maskBgView; // @synthesize maskBgView=_maskBgView;
@property(retain, nonatomic) UILabel *extLabel; // @synthesize extLabel=_extLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (long long)selectionCellStyle;
- (void)resetCommonButtonViewFrame:(struct CGSize)arg1;
- (_Bool)canResolveButtonStyleForCommonButtonModel:(id)arg1 withCommonButtonView:(id)arg2 outputStyle:(CDStruct_4bcfbbae *)arg3;
- (_Bool)commonButtonView:(id)arg1 handleCommonButtonPressedWithModel:(id)arg2;
- (void)avatarViewPressed:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setCommonButton;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

