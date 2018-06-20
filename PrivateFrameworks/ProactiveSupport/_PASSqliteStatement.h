//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSDiscardableContent.h"

@class _PASSqliteDatabase;

@interface _PASSqliteStatement : NSObject <NSDiscardableContent, NSCopying>
{
    _PASSqliteDatabase *_owner;
    BOOL _isFinalized;
    unsigned int _useCount;
    struct sqlite3_stmt *_stmt;
}

@property(readonly, nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;
- (void).cxx_destruct;
- (BOOL)isColumnNull:(int)arg1;
- (double)getDoubleForColumn:(int)arg1;
- (long long)getInt64ForColumn:(int)arg1;
- (long long)getIntegerForColumn:(int)arg1;
- (id)getNSDataForColumn:(int)arg1;
- (id)getNSStringForColumn:(int)arg1;
- (int)bindParam:(int)arg1 toDouble:(double)arg2;
- (int)bindParam:(int)arg1 toInt64:(long long)arg2;
- (int)bindParam:(int)arg1 toInteger:(long long)arg2;
- (int)bindParam:(int)arg1 toNSData:(id)arg2;
- (int)bindParam:(int)arg1 toNSString:(id)arg2;
- (int)bindParamToNull:(int)arg1;
- (int)bindNamedParam:(const char *)arg1 toDouble:(double)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toInteger:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSData:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSString:(id)arg2;
- (int)bindNamedParamToNull:(const char *)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)_finalizeWithLogWarning:(id)arg1;
- (BOOL)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (BOOL)beginContentAccess;
- (id)init;
- (id)initWithStatementPointer:(struct sqlite3_stmt *)arg1 owner:(id)arg2;

@end

