//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface CGXConnectionBox : NSObject
{
    struct CGXConnection *_connection;
}

@property(nonatomic) struct CGXConnection *connection; // @synthesize connection=_connection;
- (void)invalidateBackreference;
- (id)initWithCGXConnection:(struct CGXConnection *)arg1;

@end

