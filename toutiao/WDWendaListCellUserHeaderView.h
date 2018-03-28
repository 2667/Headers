//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSThemedView.h"

@class ExploreAvatarView, NSMutableArray, SSThemedButton, SSThemedLabel, TTFollowThemeButton;
@protocol WDWendaListCellUserHeaderViewDelegate;

@interface WDWendaListCellUserHeaderView : SSThemedView
{
    id <WDWendaListCellUserHeaderViewDelegate> _delegate;
    ExploreAvatarView *_cellAvatarView;
    SSThemedButton *_userNameButton;
    SSThemedLabel *_userDescLabel;
    TTFollowThemeButton *_followButton;
    NSMutableArray *_medalImageViews;
}

+ (double)userAvatarBottomPadding;
+ (double)userAvatarTopPadding;
+ (double)userHeaderHeight;
@property(retain, nonatomic) NSMutableArray *medalImageViews; // @synthesize medalImageViews=_medalImageViews;
@property(retain, nonatomic) TTFollowThemeButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) SSThemedLabel *userDescLabel; // @synthesize userDescLabel=_userDescLabel;
@property(retain, nonatomic) SSThemedButton *userNameButton; // @synthesize userNameButton=_userNameButton;
@property(retain, nonatomic) ExploreAvatarView *cellAvatarView; // @synthesize cellAvatarView=_cellAvatarView;
@property(nonatomic) __weak id <WDWendaListCellUserHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)followButtonClick:(id)arg1;
- (void)avatarButtonClick:(id)arg1;
- (id)userMedals:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)refreshFollowButtonState:(_Bool)arg1;
- (void)refreshDescInfoContent:(id)arg1;
- (void)refreshUserInfoContent:(id)arg1 descInfo:(id)arg2 followButtonHidden:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
