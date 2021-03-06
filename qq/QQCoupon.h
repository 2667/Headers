//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface QQCoupon : NSObject
{
    NSNumber *_cid;
    NSNumber *_bid;
    NSNumber *_sourceId;
    NSArray *_shids;
    NSString *_name;
    NSString *_detail;
    NSNumber *_stime;
    NSNumber *_etime;
    NSNumber *_ktime;
    int _verifyType;
    NSString *_pic;
    NSString *_tag;
    _Bool _isValid;
    NSString *_usage;
    NSString *_rebate;
    NSString *_qrCode;
    NSString *_qlifeURL;
    NSString *_tips;
    NSNumber *_rcvLimit;
    NSNumber *_rcvCount;
    _Bool _isReusable;
    int _xo;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)business;
- (id)description;
- (id)initWithMessage:(const struct Coupon *)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *bid; // @dynamic bid;
@property(retain, nonatomic) NSNumber *cid; // @dynamic cid;
@property(copy, nonatomic) NSString *detail; // @dynamic detail;
@property(retain, nonatomic) NSNumber *etime; // @dynamic etime;
@property(nonatomic) _Bool isReusable; // @dynamic isReusable;
@property(nonatomic) _Bool isValid; // @dynamic isValid;
@property(retain, nonatomic) NSNumber *ktime; // @dynamic ktime;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *pic; // @dynamic pic;
@property(copy, nonatomic) NSString *qlifeURL; // @dynamic qlifeURL;
@property(copy, nonatomic) NSString *qrCode; // @dynamic qrCode;
@property(retain, nonatomic) NSNumber *rcvCount; // @dynamic rcvCount;
@property(retain, nonatomic) NSNumber *rcvLimit; // @dynamic rcvLimit;
@property(copy, nonatomic) NSString *rebate; // @dynamic rebate;
@property(retain, nonatomic) NSArray *shids; // @dynamic shids;
@property(retain, nonatomic) NSNumber *sourceId; // @dynamic sourceId;
@property(retain, nonatomic) NSNumber *stime; // @dynamic stime;
@property(copy, nonatomic) NSString *tag; // @dynamic tag;
@property(copy, nonatomic) NSString *tips; // @dynamic tips;
@property(copy, nonatomic) NSString *usage; // @dynamic usage;
@property(nonatomic) int verifyType; // @dynamic verifyType;

@end

