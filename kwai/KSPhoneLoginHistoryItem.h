//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLoginHistoryItem.h"

@class NSString;

@interface KSPhoneLoginHistoryItem : KSLoginHistoryItem
{
    NSString *_phone;
    NSString *_countryEnCode;
    NSString *_countryNumCode;
}

@property(retain, nonatomic) NSString *countryNumCode; // @synthesize countryNumCode=_countryNumCode;
@property(retain, nonatomic) NSString *countryEnCode; // @synthesize countryEnCode=_countryEnCode;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;
- (id)loginType;

@end
