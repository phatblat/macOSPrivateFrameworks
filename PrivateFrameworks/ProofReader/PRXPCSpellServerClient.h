//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface PRXPCSpellServerClient : NSObject
{
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

+ (id)spellServerClient;
- (id)_suggestCompletionsForPartialWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (id)_suggestGuessesForWordRange:(struct _NSRange)arg1 inString:(id)arg2 language:(id)arg3;
- (struct _NSRange)_findMisspelledWordInString:(id)arg1 language:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(long long *)arg4 countOnly:(BOOL)arg5;
- (id)contextForMessageName:(id)arg1 waitForReply:(BOOL)arg2;
- (BOOL)isValid;
- (id)connection;
- (id)serverName;
- (void)dealloc;
- (id)initWithServerName:(id)arg1;

@end

