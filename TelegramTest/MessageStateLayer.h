//
//  MessageStateLayer.h
//  Telegram
//
//  Created by keepcoder on 19.10.14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import "BTRView.h"
#import "MessageTableCellContainerView.h"

@interface MessageStateLayer : TMView

@property (nonatomic,weak) MessageTableCellContainerView *container;

-(void)setState:(MessageTableCellState)state;
-(void)setState:(MessageTableCellState)state animated:(BOOL)animated;
@end
