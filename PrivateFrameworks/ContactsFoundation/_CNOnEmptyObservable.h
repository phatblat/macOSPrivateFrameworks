//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@interface _CNOnEmptyObservable : CNObservable
{
    id <CNObservable> _observable;
    id <CNObservable> _nextObservable;
    BOOL _observableIsEmpty;
}

@property(retain, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
- (void).cxx_destruct;
- (id)subscribeNextObservable:(id)arg1;
- (BOOL)isObservableEmpty;
- (void)observableDidSendResult;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 nextObservable:(id)arg2;

@end

