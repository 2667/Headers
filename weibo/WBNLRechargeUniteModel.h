//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class NSString;

@interface WBNLRechargeUniteModel : WBNLBaseModel
{
    NSString *_productid;
    NSString *_title;
    NSString *_message;
    long long _isfirst;
}

@property(nonatomic) long long isfirst; // @synthesize isfirst=_isfirst;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *productid; // @synthesize productid=_productid;
- (void).cxx_destruct;

@end

