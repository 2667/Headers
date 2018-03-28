//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MJCoding-Protocol.h"

@class MBKCarDeposit, NSNumber, NSString;

@interface MBKUserPaymentBonus : NSObject <MJCoding>
{
    _Bool _hasSHThirdAccount;
    _Bool _isThirdAccountVisible;
    NSString *_redirectUrl;
    long long _locationCardTrade;
    long long _userCanRenewCard;
    NSString *_monthCardBackgroundUrl;
    NSString *_freeUserBanner;
    NSString *_userid;
    long long _hasValidMonthCard;
    double _balance;
    NSString *_payFreeRiderPicUrl;
    NSString *_monthCardHint;
    long long _hasFreeDeposit;
    NSString *_monthCardName;
    NSString *_freeDeposit;
    long long _redPacketTotal;
    long long _monthCardExpireTime;
    NSNumber *_cardType;
    long long _cardActive;
    NSString *_paySource;
    long long _freeUserCanBuyMonthCard;
    long long _expireTime;
    NSString *_payFreeRiderUrl;
    long long _deposit;
    long long _monthCardRestDays;
    long long _noAuthPay;
    NSString *_cardTypeString;
    NSString *_myWalletMessage;
    MBKCarDeposit *_carShareDeposit;
    long long _realBalance;
    long long _sendBalance;
    long long _shThirdAccount;
    long long _userCanBuyMonthCard;
}

+ (id)jsonKeyToClassNameMap;
@property(nonatomic) long long userCanBuyMonthCard; // @synthesize userCanBuyMonthCard=_userCanBuyMonthCard;
@property(readonly, nonatomic) _Bool isThirdAccountVisible; // @synthesize isThirdAccountVisible=_isThirdAccountVisible;
@property(readonly, nonatomic) _Bool hasSHThirdAccount; // @synthesize hasSHThirdAccount=_hasSHThirdAccount;
@property(nonatomic) long long shThirdAccount; // @synthesize shThirdAccount=_shThirdAccount;
@property(nonatomic) long long sendBalance; // @synthesize sendBalance=_sendBalance;
@property(nonatomic) long long realBalance; // @synthesize realBalance=_realBalance;
@property(retain, nonatomic) MBKCarDeposit *carShareDeposit; // @synthesize carShareDeposit=_carShareDeposit;
@property(readonly, copy, nonatomic) NSString *myWalletMessage; // @synthesize myWalletMessage=_myWalletMessage;
@property(readonly, copy, nonatomic) NSString *cardTypeString; // @synthesize cardTypeString=_cardTypeString;
@property(nonatomic) long long noAuthPay; // @synthesize noAuthPay=_noAuthPay;
@property(nonatomic) long long monthCardRestDays; // @synthesize monthCardRestDays=_monthCardRestDays;
@property(nonatomic) long long deposit; // @synthesize deposit=_deposit;
@property(copy, nonatomic) NSString *payFreeRiderUrl; // @synthesize payFreeRiderUrl=_payFreeRiderUrl;
@property(nonatomic) long long expireTime; // @synthesize expireTime=_expireTime;
@property(nonatomic) long long freeUserCanBuyMonthCard; // @synthesize freeUserCanBuyMonthCard=_freeUserCanBuyMonthCard;
@property(copy, nonatomic) NSString *paySource; // @synthesize paySource=_paySource;
@property(nonatomic) long long cardActive; // @synthesize cardActive=_cardActive;
@property(copy, nonatomic) NSNumber *cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long monthCardExpireTime; // @synthesize monthCardExpireTime=_monthCardExpireTime;
@property(nonatomic) long long redPacketTotal; // @synthesize redPacketTotal=_redPacketTotal;
@property(copy, nonatomic) NSString *freeDeposit; // @synthesize freeDeposit=_freeDeposit;
@property(copy, nonatomic) NSString *monthCardName; // @synthesize monthCardName=_monthCardName;
@property(nonatomic) long long hasFreeDeposit; // @synthesize hasFreeDeposit=_hasFreeDeposit;
@property(copy, nonatomic) NSString *monthCardHint; // @synthesize monthCardHint=_monthCardHint;
@property(copy, nonatomic) NSString *payFreeRiderPicUrl; // @synthesize payFreeRiderPicUrl=_payFreeRiderPicUrl;
@property(nonatomic) double balance; // @synthesize balance=_balance;
@property(nonatomic) long long hasValidMonthCard; // @synthesize hasValidMonthCard=_hasValidMonthCard;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;
@property(copy, nonatomic) NSString *freeUserBanner; // @synthesize freeUserBanner=_freeUserBanner;
@property(copy, nonatomic) NSString *monthCardBackgroundUrl; // @synthesize monthCardBackgroundUrl=_monthCardBackgroundUrl;
@property(nonatomic) long long userCanRenewCard; // @synthesize userCanRenewCard=_userCanRenewCard;
@property(nonatomic) long long locationCardTrade; // @synthesize locationCardTrade=_locationCardTrade;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMonthCardValidInLocationCountry;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

