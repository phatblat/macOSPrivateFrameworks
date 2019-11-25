//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCRBrailleDescribing.h"

@class NSString, SCRCIndexMap, SCREvent, SCRGuide, SCRKeyboardKey;

__attribute__((visibility("hidden")))
@interface SCRGuideItem : NSObject <SCRBrailleDescribing>
{
    BOOL _forceSpeakWrittenTitle;
    SCRGuide *_guide;
    NSString *_title;
    SCRKeyboardKey *_key;
    unsigned long long _modifier;
    SCRCIndexMap *_info;
    SCRGuide *_subguide;
    id _target;
    id _action;
    long long _tag;
    NSString *_alernativeCommandActivator;
    NSString *__command;
}

@property(copy, nonatomic) NSString *_command; // @synthesize _command=__command;
@property(nonatomic) BOOL forceSpeakWrittenTitle; // @synthesize forceSpeakWrittenTitle=_forceSpeakWrittenTitle;
@property(retain, nonatomic) NSString *alernativeCommandActivator; // @synthesize alernativeCommandActivator=_alernativeCommandActivator;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) id action; // @synthesize action=_action;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) SCRGuide *subguide; // @synthesize subguide=_subguide;
@property(readonly, copy, nonatomic) SCRCIndexMap *info; // @synthesize info=_info;
@property(readonly, nonatomic) unsigned long long modifier; // @synthesize modifier=_modifier;
@property(readonly, nonatomic) SCRKeyboardKey *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak SCRGuide *guide; // @synthesize guide=_guide;
- (void).cxx_destruct;
- (id)description;
- (long long)sortDescendingByTitle:(id)arg1;
- (long long)sortAscendingByTitle:(id)arg1;
- (void)addBrailleDescriptionToRequest:(id)arg1;
- (id)_prependModifiers:(unsigned long long)arg1 toString:(id)arg2;
@property(readonly, copy, nonatomic) NSString *keyboardShortcutAsString;
- (void)addDisplayTitleToRequest:(id)arg1;
@property(readonly, nonatomic) SCREvent *event;
- (id)initWithTitle:(id)arg1 command:(id)arg2 guide:(id)arg3 subguide:(id)arg4 target:(id)arg5 action:(id)arg6 tag:(long long)arg7 info:(id)arg8;
- (id)initWithTitle:(id)arg1 key:(id)arg2 modifier:(unsigned long long)arg3 guide:(id)arg4 subguide:(id)arg5 target:(id)arg6 action:(id)arg7 tag:(long long)arg8 info:(id)arg9;

@end

