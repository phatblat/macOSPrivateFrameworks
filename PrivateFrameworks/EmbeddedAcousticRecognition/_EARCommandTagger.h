//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _EARCommandTagger : NSObject
{
    struct unique_ptr<quasar::CommandTagger, std::__1::default_delete<quasar::CommandTagger>> _tagger;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isCommandPhraseTag:(id)arg1;
- (BOOL)isParameterTag:(id)arg1;
- (id)commandPhraseTagForIndex:(long long)arg1;
- (id)parameterTagForIndex:(long long)arg1;
- (id)commandTaggingFromRecognitionResult:(id)arg1 activeCommands:(id)arg2;
- (id)initWithConfiguration:(id)arg1 usage:(long long)arg2;

@end

