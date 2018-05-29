//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class NSDate, NSString;

@interface WBAuthorizeResponse : WBBaseResponse
{
    NSString *userID;
    NSString *accessToken;
    NSDate *expirationDate;
    NSString *refreshToken;
}

@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken;
@property(retain, nonatomic) NSString *userID; // @synthesize userID;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;

@end

