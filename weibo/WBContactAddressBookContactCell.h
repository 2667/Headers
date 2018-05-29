//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBContactContactsTableViewCell.h"

@class UIButton, UIControl, WBContactAddressBookContactsTipView, WBContactDataButton;

@interface WBContactAddressBookContactCell : WBContactContactsTableViewCell
{
    _Bool isReceivingLikeNotifications;
    WBContactAddressBookContactsTipView *tipView;
    UIControl *meAccessoryView;
    WBContactDataButton *statusesButton;
    WBContactDataButton *favoritesButton;
    WBContactDataButton *followersButton;
    _Bool _isFriendsGroupManagementCell;
    _Bool _isFirendSGroupAddCell;
    _Bool _isFriendsGroupAdded;
    _Bool _isNeedSection;
    _Bool _isChatGroupManagementCell;
    UIButton *_removeButton;
}

@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(nonatomic) _Bool isChatGroupManagementCell; // @synthesize isChatGroupManagementCell=_isChatGroupManagementCell;
@property(nonatomic) _Bool isNeedSection; // @synthesize isNeedSection=_isNeedSection;
@property(nonatomic) _Bool isFriendsGroupAdded; // @synthesize isFriendsGroupAdded=_isFriendsGroupAdded;
@property(nonatomic) _Bool isFirendSGroupAddCell; // @synthesize isFirendSGroupAddCell=_isFirendSGroupAddCell;
@property(nonatomic) _Bool isFriendsGroupManagementCell; // @synthesize isFriendsGroupManagementCell=_isFriendsGroupManagementCell;
@property(nonatomic, setter=setIsReceivingLinkNotifications:) _Bool isReceivingLikeNotifications; // @synthesize isReceivingLikeNotifications;
- (void).cxx_destruct;
- (void)appLanguageDidChangeNotification:(id)arg1;
- (void)refreshMyContactCard;
- (void)contactEngineDidClearFollowerUnreadCountNotification:(id)arg1;
- (void)currentAccountUnreadCountDidUpdateNotification:(id)arg1;
- (void)updateFollowerUnreadCount;
- (void)reloadUIElements;
- (void)addButtonPressed:(id)arg1;
- (void)removeButtonPressed:(id)arg1;
- (void)followersButtonPressed:(id)arg1;
- (void)favoritesButtonPressed:(id)arg1;
- (void)statusesButtonPressed:(id)arg1;
- (void)tipButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)setContact:(id)arg1;
- (void)pageNewPageLikeDidChangeNotification:(id)arg1;
- (_Bool)showsAccessoryImageBar;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

