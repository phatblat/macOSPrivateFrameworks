//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PVTaskTokenPool : NSObject
{
    unsigned long long _tokenCounter;
    struct stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long>>> _tokenData;
    struct mutex _tokenLock;
    id <PVTaskTokenPoolDelegate> _delegate;
}

@property(nonatomic) __weak id <PVTaskTokenPoolDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)returnToken:(id)arg1;
- (id)getToken;
- (id)initWithOffset:(unsigned long long)arg1;
- (id)init;

@end
