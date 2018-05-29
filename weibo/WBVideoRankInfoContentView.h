//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WBContactAvatarView, WBStatus, WBTimelineAttributedText, WBTimelineAttributedTextView;
@protocol WBVideoRankInfoContentViewDelegate;

@interface WBVideoRankInfoContentView : UIView
{
    id <WBVideoRankInfoContentViewDelegate> _delegate;
    WBContactAvatarView *_avatarView;
    WBTimelineAttributedTextView *_contentTextView;
    UIButton *_extraButton;
    UILabel *_rankLabel;
    UIImageView *_gradientView;
    UILabel *_nameLabel;
    UILabel *_playCountLabel;
    WBTimelineAttributedText *_attributedText;
    WBStatus *_status;
}

+ (_Bool)shouldShowPlayCountLabelBeblow:(id)arg1 contentWidth:(double)arg2;
+ (double)heightOfStatus:(id)arg1 contentWidth:(double)arg2;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) WBTimelineAttributedText *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(retain, nonatomic) WBTimelineAttributedTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak id <WBVideoRankInfoContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)extraButtonPressed:(id)arg1;
- (void)avatarViewPressed:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)updateContentTextViewSize:(id)arg1;
- (void)updateWithStatus:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

