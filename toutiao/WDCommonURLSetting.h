//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WDCommonURLSetting : NSObject
{
    NSString *_baseUrl;
}

+ (id)uploadImageURL;
+ (id)sharedInstance;
+ (id)searchWebURLString;
+ (id)baseURL;
+ (void)load;
@property(copy, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
- (void).cxx_destruct;
- (void)setDomainBaseURL:(id)arg1;

@end

