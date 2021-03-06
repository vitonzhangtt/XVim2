//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSSecureCoding-Protocol.h>

@class NSArray;
@protocol IDEEditorHistoryControllerItem;

@interface IDEEditorHistoryStack : NSObject <NSSecureCoding>
{
    NSArray *_previousHistoryItems;
    NSArray *_nextHistoryItems;
    id <IDEEditorHistoryControllerItem> currentHistoryItem;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) id <IDEEditorHistoryControllerItem> currentEditorHistoryItem; // @synthesize currentEditorHistoryItem=currentHistoryItem;
@property(readonly) NSArray *nextHistoryItems; // @synthesize nextHistoryItems=_nextHistoryItems;
@property(readonly) NSArray *previousHistoryItems; // @synthesize previousHistoryItems=_previousHistoryItems;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)initWithCurrentEditorHistoryItem:(id)arg1 previousHistoryItems:(id)arg2 nextHistoryItems:(id)arg3;
- (id)initWithCurrentEditorHistoryItem:(id)arg1;

@end

