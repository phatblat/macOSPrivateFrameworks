//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet, SCRCIndexMap, SCRKeyboardKey;

__attribute__((visibility("hidden")))
@interface SCREvent : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    SCRKeyboardKey *_key;
    NSSet *_commands;
    unsigned long long _modifier;
    double _creationTime;
    SCRCIndexMap *_info;
    long long _priority;
    unsigned long long _keyRepeatCount;
    struct __flags {
        unsigned int isModalEvent:1;
        unsigned int isKeyRepeatEvent:1;
        unsigned int isEndingEvent:1;
    } _flags;
    long long _insertionPointAffinity;
}

+ (id)titleForTag:(long long)arg1;
+ (id)_tagTitleMap;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long insertionPointAffinity; // @synthesize insertionPointAffinity=_insertionPointAffinity;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isDFROriginatedEvent;
- (BOOL)isGestureEvent;
- (long long)commandDirection;
- (BOOL)isInvertedTEvent;
- (BOOL)containsModifier:(unsigned long long)arg1;
- (BOOL)containsKeyIgnoringCount:(id)arg1;
- (BOOL)containsKey:(id)arg1;
- (BOOL)containsCharacters:(id)arg1;
- (long long)compareByPriorityAndDate:(id)arg1;
- (BOOL)containsCommand:(id)arg1;
- (BOOL)containsCommand:(id)arg1 isEndingEvent:(BOOL)arg2;
- (BOOL)containsCommandInCategory:(id)arg1;
- (id)commands;
- (id)argumentString;
- (id)argument;
- (void)setCommands:(id)arg1;
- (BOOL)containsTag:(long long)arg1;
- (long long)tag;
- (void)setTag:(long long)arg1;
- (id)guideAction;
- (BOOL)isGuideEventForTarget:(id)arg1;
- (id)guideTarget;
- (void)setGuideTarget:(id)arg1;
- (id)outputString;
- (double)creationTime;
- (long long)priority;
- (void)setInfoObject:(id)arg1 forIndex:(unsigned int)arg2;
- (id)info;
- (unsigned long long)modifier;
- (id)key;
- (long long)type;
- (BOOL)isQuickNavSelectionEvent;
- (BOOL)isOutputEvent;
- (BOOL)isEchoEvent;
- (BOOL)isTagEvent;
- (BOOL)isGuideEvent;
- (BOOL)isActivatorEvent;
@property(nonatomic) BOOL isEndingEvent;
@property(nonatomic) BOOL isModalEvent;
@property(nonatomic) BOOL isKeyRepeatEvent;
@property(readonly, nonatomic) unsigned long long keyRepeatCount;
- (void)setKeyRepeatCount:(unsigned long long)arg1;
- (void)incrementKeyRepeatCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initGuideEventWithTarget:(id)arg1 action:(id)arg2 tag:(long long)arg3 info:(id)arg4 priority:(long long)arg5;
- (id)initOutputEventWithString:(id)arg1 info:(id)arg2 priority:(long long)arg3;
- (id)initEchoEventWithKey:(id)arg1 modifier:(unsigned long long)arg2 info:(id)arg3 priority:(long long)arg4;
- (id)initTagEventWithTag:(long long)arg1 key:(id)arg2 modifier:(unsigned long long)arg3 info:(id)arg4 priority:(long long)arg5;
- (id)initActivatorEventWithKey:(id)arg1 modifier:(unsigned long long)arg2 info:(id)arg3 priority:(long long)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 key:(id)arg2 modifier:(unsigned long long)arg3 info:(id)arg4 priority:(long long)arg5;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

