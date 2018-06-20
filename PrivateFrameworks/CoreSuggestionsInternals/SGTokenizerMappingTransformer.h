//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMLTransformerProtocol.h"

@class NSLinguisticTagger, NSString;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSLinguisticTagger *_tagger;
    BOOL _nameTagging;
    NSString *_punctuationMapping;
    NSString *_personalNameMapping;
    NSString *_locale;
    void *_nlpTagger;
    int _linguisticDataNotificationToken;
}

+ (id)forLocale:(id)arg1 withNameTagging:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;
+ (id)forLocale:(id)arg1 withPersonalNameMapping:(id)arg2;
+ (id)forLocale:(id)arg1;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (void)transformWithNLLinguisticTagger:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)transformWithCoreNLP:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)initForLocale:(id)arg1 withNameTagging:(BOOL)arg2 personalNameMapping:(id)arg3 punctuationMapping:(id)arg4;

@end

