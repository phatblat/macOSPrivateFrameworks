//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RDFace, RDPerson;

@interface RDPersonSuggestionResult : NSObject
{
    BOOL _confirmed;
    RDFace *_keyFace;
    RDPerson *_person;
}

@property BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(retain, nonatomic) RDPerson *person; // @synthesize person=_person;
@property(retain, nonatomic) RDFace *keyFace; // @synthesize keyFace=_keyFace;
- (void).cxx_destruct;
- (id)initWithKeyFace:(id)arg1 person:(id)arg2 confirmed:(BOOL)arg3;
- (id)asPLPhotoAnalysisPersonSuggestion;
- (id)suggestionDictionaryRepresentation;

@end

