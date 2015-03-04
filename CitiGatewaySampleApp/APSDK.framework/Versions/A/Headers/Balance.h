//
//  Balance.h
//  AnyPresence SDK
//

/*!
 @header Balance
 @abstract Balance class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class Balance
 @abstract Generated model object: Balance.
 @discussion Use @link //apple_ref/occ/cat/Balance(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/Balance/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface Balance : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a Balance.
 @result Class representing the data source associated with a Balance.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var accountId
 @abstract Generated model property: account_id.
 */
@property (nonatomic, strong) NSString * accountId;

/*!
 @var balanceType
 @abstract Generated model property: balance_type.
 */
@property (nonatomic, strong) NSString * balanceType;

/*!
 @var value
 @abstract Generated model property: value.
 */
@property (nonatomic, strong) NSNumber * value;

@end
