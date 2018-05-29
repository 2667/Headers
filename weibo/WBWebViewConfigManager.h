//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface WBWebViewConfigManager : NSObject
{
    NSArray *_appleAppUrlWhitelist;
    NSArray *_appleNonAppUrlWhitelist;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSArray *appleNonAppUrlWhitelist; // @synthesize appleNonAppUrlWhitelist=_appleNonAppUrlWhitelist;
@property(retain, nonatomic) NSArray *appleAppUrlWhitelist; // @synthesize appleAppUrlWhitelist=_appleAppUrlWhitelist;
- (void).cxx_destruct;
- (void)saveConfigToFile;
- (id)configFilePath;
- (_Bool)isWhitelist:(id)arg1 equalTo:(id)arg2;
- (id)init;

@end

