//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBDTemplateManager, TBDViewGenerator;

@interface TBDetailDinamicManager : NSObject
{
    TBDViewGenerator *_generator;
    TBDTemplateManager *_templateManager;
    CDUnknownBlockType _updateBlock;
}

@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) TBDTemplateManager *templateManager; // @synthesize templateManager=_templateManager;
@property(retain, nonatomic) TBDViewGenerator *generator; // @synthesize generator=_generator;
- (void).cxx_destruct;
- (void)refreshComponentsInMap:(id)arg1 withTemplates:(id)arg2;
- (void)downloadTemplates:(id)arg1 componentMap:(id)arg2;
- (void)downloadTemplatesInComponents:(id)arg1;
- (id)init;

@end
