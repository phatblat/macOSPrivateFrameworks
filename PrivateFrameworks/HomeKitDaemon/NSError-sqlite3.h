//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (sqlite3)
+ (id)errorWithSQLite3Statement:(struct sqlite3_stmt *)arg1;
+ (id)errorWithSQLite3Context:(struct sqlite3 *)arg1 statement:(const char *)arg2;
+ (id)errorWithSQLite3Context:(struct sqlite3 *)arg1;
@end

