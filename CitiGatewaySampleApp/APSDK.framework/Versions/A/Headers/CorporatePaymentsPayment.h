//
//  CorporatePaymentsPayment.h
//  AnyPresence SDK
//

/*!
 @header CorporatePaymentsPayment
 @abstract CorporatePaymentsPayment class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CorporatePaymentsPayment
 @abstract Generated model object: CorporatePaymentsPayment.
 @discussion Use @link //apple_ref/occ/cat/CorporatePaymentsPayment(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CorporatePaymentsPayment/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CorporatePaymentsPayment : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CorporatePaymentsPayment.
 @result Class representing the data source associated with a CorporatePaymentsPayment.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var beneficiaryId
 @abstract Generated model property: beneficiary_id.
 */
@property (nonatomic, strong) NSString * beneficiaryId;

/*!
 @var branchName
 @abstract Generated model property: branch_name.
 */
@property (nonatomic, strong) NSString * branchName;

/*!
 @var createdBy
 @abstract Generated model property: created_by.
 */
@property (nonatomic, strong) NSString * createdBy;

/*!
 @var createdOn
 @abstract Generated model property: created_on.
 */
@property (nonatomic, strong) NSString * createdOn;

/*!
 @var customerReferenceNumber
 @abstract Generated model property: customer_reference_number.
 */
@property (nonatomic, strong) NSString * customerReferenceNumber;

/*!
 @var debitAccountName
 @abstract Generated model property: debit_account_name.
 */
@property (nonatomic, strong) NSString * debitAccountName;

/*!
 @var debitAccountNumber
 @abstract Generated model property: debit_account_number.
 */
@property (nonatomic, strong) NSString * debitAccountNumber;

/*!
 @var email
 @abstract Generated model property: email.
 */
@property (nonatomic, strong) NSString * email;

/*!
 @var paymentAmount
 @abstract Generated model property: payment_amount.
 */
@property (nonatomic, strong) NSString * paymentAmount;

/*!
 @var paymentCurrency
 @abstract Generated model property: payment_currency.
 */
@property (nonatomic, strong) NSString * paymentCurrency;

/*!
 @var paymentDetails
 @abstract Generated model property: payment_details.
 */
@property (nonatomic, strong) NSString * paymentDetails;

/*!
 @var paymentMethod
 @abstract Generated model property: payment_method.
 */
@property (nonatomic, strong) NSString * paymentMethod;

/*!
 @var paymentType
 @abstract Generated model property: payment_type.
 */
@property (nonatomic, strong) NSString * paymentType;

/*!
 @var status
 @abstract Generated model property: status.
 */
@property (nonatomic, strong) NSString * status;

/*!
 @var transactionReferenceNumber
 @abstract Generated model property: transaction_reference_number.
 */
@property (nonatomic, strong) NSString * transactionReferenceNumber;

/*!
 @var valueDate
 @abstract Generated model property: value_date.
 */
@property (nonatomic, strong) NSString * valueDate;

@end
