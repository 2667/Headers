//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class ALPLanguageModel, NSString;

@interface ALPLocalizationsConfig : NSObject <NSCopying>
{
    ALPLanguageModel *_developmentLanguage;
    NSString *_defaultLanguageCode;
    NSString *_languagePackageInitialPath;
    long long _languagePackageInitialVersion;
    NSString *_extensionAppGroupIdentifier;
    CDUnknownBlockType _languageFilterBlock;
}

@property(copy, nonatomic) CDUnknownBlockType languageFilterBlock; // @synthesize languageFilterBlock=_languageFilterBlock;
@property(retain, nonatomic) NSString *extensionAppGroupIdentifier; // @synthesize extensionAppGroupIdentifier=_extensionAppGroupIdentifier;
@property(nonatomic) long long languagePackageInitialVersion; // @synthesize languagePackageInitialVersion=_languagePackageInitialVersion;
@property(retain, nonatomic) NSString *languagePackageInitialPath; // @synthesize languagePackageInitialPath=_languagePackageInitialPath;
@property(retain, nonatomic) NSString *defaultLanguageCode; // @synthesize defaultLanguageCode=_defaultLanguageCode;
@property(retain, nonatomic) ALPLanguageModel *developmentLanguage; // @synthesize developmentLanguage=_developmentLanguage;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
