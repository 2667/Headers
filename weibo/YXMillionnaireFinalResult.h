//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXMillionnaireBaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface YXMillionnaireFinalResult : YXMillionnaireBaseModel
{
    NSDictionary *_result;
    long long _type_;
    NSString *_title;
    double _price;
    NSArray *_rewardedUsers;
}

@property(retain, nonatomic) NSArray *rewardedUsers; // @synthesize rewardedUsers=_rewardedUsers;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type_; // @synthesize type_=_type_;
@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

