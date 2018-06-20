//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AECommandParameter, NSMutableDictionary, NSString;

@interface AECommandDetails : NSObject
{
    unsigned int _eventClass;
    unsigned int _eventID;
    unsigned int _resultType;
    NSString *_displayName;
    AECommandParameter *_directParameter;
    NSMutableDictionary *_parameters;
}

+ (id)detailsWithEventClass:(unsigned int)arg1 eventID:(unsigned int)arg2 displayName:(id)arg3;
@property unsigned int resultType; // @synthesize resultType=_resultType;
@property(retain) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain) AECommandParameter *directParameter; // @synthesize directParameter=_directParameter;
@property unsigned int eventID; // @synthesize eventID=_eventID;
@property unsigned int eventClass; // @synthesize eventClass=_eventClass;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)parameterNameForCode:(unsigned int)arg1;
- (unsigned int)parameterCodeForName:(id)arg1;
- (id)parameterNames;
- (void)setParameter:(id)arg1 forName:(id)arg2;
- (id)initWithEventClass:(unsigned int)arg1 eventID:(unsigned int)arg2 displayName:(id)arg3;

@end

