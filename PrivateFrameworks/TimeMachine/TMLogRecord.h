//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface TMLogRecord : NSObject
{
    NSString *_message;
    NSDate *_date;
    unsigned int _level;
    NSString *_key;
    NSString *_file;
    unsigned int _line;
}

@property(readonly) unsigned int line; // @synthesize line=_line;
@property(readonly) unsigned int level; // @synthesize level=_level;
@property(readonly) NSString *file; // @synthesize file=_file;
@property(readonly) NSString *key; // @synthesize key=_key;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *message; // @synthesize message=_message;
@property(readonly) BOOL isDebug;
- (id)description;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 date:(id)arg2 level:(unsigned int)arg3 key:(id)arg4 file:(id)arg5 line:(unsigned int)arg6;

@end

