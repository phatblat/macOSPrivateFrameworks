//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface PRLexiconCorrectionCursor : NSObject
{
    struct _LXCursor *_cursor;
    unsigned long long _replacementsCount;
    unsigned long long _insertionsCount;
    unsigned long long _deletionsCount;
    unsigned long long _transpositionsCount;
    unsigned long long _advancementLength;
}

@property(readonly) unsigned long long advancementLength; // @synthesize advancementLength=_advancementLength;
@property(readonly) unsigned long long transpositionsCount; // @synthesize transpositionsCount=_transpositionsCount;
@property(readonly) unsigned long long deletionsCount; // @synthesize deletionsCount=_deletionsCount;
@property(readonly) unsigned long long insertionsCount; // @synthesize insertionsCount=_insertionsCount;
@property(readonly) unsigned long long replacementsCount; // @synthesize replacementsCount=_replacementsCount;
@property(readonly) struct _LXCursor *cursor; // @synthesize cursor=_cursor;
@property(readonly) unsigned long long errorType;
@property(readonly) double prefixProbability;
@property(readonly) unsigned long long totalEdits;
- (id)description;
- (void)dealloc;
- (id)initWithCursor:(struct _LXCursor *)arg1 replacementsCount:(unsigned long long)arg2 insertionsCount:(unsigned long long)arg3 deletionsCount:(unsigned long long)arg4 transpositionsCount:(unsigned long long)arg5 advancementLength:(unsigned long long)arg6;

@end

