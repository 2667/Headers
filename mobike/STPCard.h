//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "STPCardParams.h"

#import "STPAPIResponseDecodable-Protocol.h"
#import "STPPaymentMethod-Protocol.h"
#import "STPSourceProtocol-Protocol.h"

@class NSDictionary, NSString, STPAddress, UIImage;

@interface STPCard : STPCardParams <STPAPIResponseDecodable, STPPaymentMethod, STPSourceProtocol>
{
    NSString *_dynamicLast4;
    NSString *_cardId;
    long long _brand;
    long long _funding;
    NSString *_country;
    NSString *_last4;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
+ (id)requiredFields;
+ (long long)fundingFromString:(id)arg1;
+ (id)stringFromBrand:(long long)arg1;
+ (long long)brandFromString:(id)arg1;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) NSString *last4; // @synthesize last4=_last4;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(nonatomic) long long funding; // @synthesize funding=_funding;
@property(nonatomic) long long brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *dynamicLast4; // @synthesize dynamicLast4=_dynamicLast4;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *templateImage;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *label;
@property(readonly, copy, nonatomic) NSString *stripeID;
@property(copy, nonatomic) STPAddress *address; // @dynamic address;
- (_Bool)isEqualToCard:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isApplePayCard;
- (id)init;
- (id)initWithID:(id)arg1 brand:(long long)arg2 last4:(id)arg3 expMonth:(unsigned long long)arg4 expYear:(unsigned long long)arg5 funding:(long long)arg6;

// Remaining properties
@property(copy, nonatomic) NSString *addressCity; // @dynamic addressCity;
@property(copy, nonatomic) NSString *addressCountry; // @dynamic addressCountry;
@property(copy, nonatomic) NSString *addressLine1; // @dynamic addressLine1;
@property(copy, nonatomic) NSString *addressLine2; // @dynamic addressLine2;
@property(copy, nonatomic) NSString *addressState; // @dynamic addressState;
@property(copy, nonatomic) NSString *addressZip; // @dynamic addressZip;
@property(copy, nonatomic) NSString *currency; // @dynamic currency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long expMonth; // @dynamic expMonth;
@property(nonatomic) unsigned long long expYear; // @dynamic expYear;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;

@end
