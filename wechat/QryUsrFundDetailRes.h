//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, DocumentItem, MiniAppsItem, NSMutableArray, NSString;

@interface QryUsrFundDetailRes : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int accountType; // @dynamic accountType;
@property(retain, nonatomic) NSMutableArray *actionSheet; // @dynamic actionSheet;
@property(nonatomic) unsigned int balance; // @dynamic balance;
@property(retain, nonatomic) DocumentItem *banner; // @dynamic banner;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *blockUrl; // @dynamic blockUrl;
@property(retain, nonatomic) DocumentItem *bottomFaqDesc; // @dynamic bottomFaqDesc;
@property(nonatomic) unsigned int buyValid; // @dynamic buyValid;
@property(retain, nonatomic) NSString *fundCode; // @dynamic fundCode;
@property(retain, nonatomic) NSString *gainRateDesc; // @dynamic gainRateDesc;
@property(retain, nonatomic) NSString *gainRateVal; // @dynamic gainRateVal;
@property(retain, nonatomic) NSMutableArray *infoNodeLst; // @dynamic infoNodeLst;
@property(retain, nonatomic) NSString *invalidAmountHint; // @dynamic invalidAmountHint;
@property(nonatomic) _Bool isHideCloseAccountBtn; // @dynamic isHideCloseAccountBtn;
@property(nonatomic) int isProtocolDefault; // @dynamic isProtocolDefault;
@property(nonatomic) int isShowProtocol; // @dynamic isShowProtocol;
@property(nonatomic) unsigned int maxAmountPerRedeem; // @dynamic maxAmountPerRedeem;
@property(retain, nonatomic) MiniAppsItem *miniapps; // @dynamic miniapps;
@property(retain, nonatomic) NSString *profitDate; // @dynamic profitDate;
@property(retain, nonatomic) NSMutableArray *protocolLst; // @dynamic protocolLst;
@property(nonatomic) int retCode; // @dynamic retCode;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) NSString *spid; // @dynamic spid;
@property(retain, nonatomic) NSString *totalGainDesc; // @dynamic totalGainDesc;
@property(nonatomic) unsigned int totalGainVal; // @dynamic totalGainVal;

@end

