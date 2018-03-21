//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APCheckBox, NSString, REButton, REPayChannelPicker, UILabel;
@protocol REPayChannelDelegate;

@interface RESendFooterView : UIView
{
    id <REPayChannelDelegate> _delegate;
    UILabel *_moneyLabel;
    APCheckBox *_addFriendCheckBox;
    REButton *_payButton;
    REPayChannelPicker *_payChannelPicker;
    NSString *_addFriendText;
}

@property(retain, nonatomic) NSString *addFriendText; // @synthesize addFriendText=_addFriendText;
@property(retain, nonatomic) REPayChannelPicker *payChannelPicker; // @synthesize payChannelPicker=_payChannelPicker;
@property(retain, nonatomic) REButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) APCheckBox *addFriendCheckBox; // @synthesize addFriendCheckBox=_addFriendCheckBox;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(nonatomic) __weak id <REPayChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setShowAddFriendsOption:(_Bool)arg1 defaultAddFriendValue:(_Bool)arg2;
- (void)setupCustomConstrainsWithShowAddFriendOption:(_Bool)arg1;
- (id)init;

@end
