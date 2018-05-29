//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, TTFCurrencyInfo, TTFPaddingLabel, TTFantasyImageView, TTFantasyLabel;

@interface TTFAwardTopWinnerCell : UITableViewCell
{
    long long _rank;
    NSString *_avatarURL;
    NSString *_userName;
    long long _bonus;
    TTFCurrencyInfo *_currencyInfo;
    TTFantasyImageView *_rankImageView;
    TTFantasyImageView *_avatarImageView;
    TTFantasyLabel *_userNameLabel;
    TTFPaddingLabel *_prizeMoneyLabel;
}

@property(retain, nonatomic) TTFPaddingLabel *prizeMoneyLabel; // @synthesize prizeMoneyLabel=_prizeMoneyLabel;
@property(retain, nonatomic) TTFantasyLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) TTFantasyImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TTFantasyImageView *rankImageView; // @synthesize rankImageView=_rankImageView;
@property(retain, nonatomic) TTFCurrencyInfo *currencyInfo; // @synthesize currencyInfo=_currencyInfo;
@property(nonatomic) long long bonus; // @synthesize bonus=_bonus;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
- (void).cxx_destruct;
- (id)rankImageViewName;
- (void)updateData;
- (void)initUIComponents;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

